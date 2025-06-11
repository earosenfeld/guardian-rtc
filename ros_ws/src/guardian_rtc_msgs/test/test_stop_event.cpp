#include <rclcpp/rclcpp.hpp>
#include <guardian_rtc_msgs/msg/stop_event.hpp>

class StopEventTest : public rclcpp::Node
{
public:
  StopEventTest() : Node("stop_event_test")
  {
    publisher_ = this->create_publisher<guardian_rtc_msgs::msg::StopEvent>(
      "stop_event", 10);
    
    timer_ = this->create_wall_timer(
      std::chrono::seconds(1),
      std::bind(&StopEventTest::publish_stop_event, this));
  }

private:
  void publish_stop_event()
  {
    auto message = guardian_rtc_msgs::msg::StopEvent();
    message.header.stamp = this->now();
    message.header.frame_id = "base_link";
    message.event_type = "TEST";
    message.priority = 1;
    message.description = "Test stop event";
    
    publisher_->publish(message);
    RCLCPP_INFO(this->get_logger(), "Published stop event");
  }

  rclcpp::Publisher<guardian_rtc_msgs::msg::StopEvent>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<StopEventTest>());
  rclcpp::shutdown();
  return 0;
} 