// Generated by gencpp from file vectornav/Ins.msg
// DO NOT EDIT!


#ifndef VECTORNAV_MESSAGE_INS_H
#define VECTORNAV_MESSAGE_INS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace vectornav
{
template <class ContainerAllocator>
struct Ins_
{
  typedef Ins_<ContainerAllocator> Type;

  Ins_()
    : header()
    , time(0.0)
    , week(0)
    , utcTime(0)
    , insStatus(0)
    , yaw(0.0)
    , pitch(0.0)
    , roll(0.0)
    , latitude(0.0)
    , longitude(0.0)
    , altitude(0.0)
    , nedVelX(0.0)
    , nedVelY(0.0)
    , nedVelZ(0.0)
    , attUncertainty()
    , posUncertainty(0.0)
    , velUncertainty(0.0)  {
      attUncertainty.assign(0.0);
  }
  Ins_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , time(0.0)
    , week(0)
    , utcTime(0)
    , insStatus(0)
    , yaw(0.0)
    , pitch(0.0)
    , roll(0.0)
    , latitude(0.0)
    , longitude(0.0)
    , altitude(0.0)
    , nedVelX(0.0)
    , nedVelY(0.0)
    , nedVelZ(0.0)
    , attUncertainty()
    , posUncertainty(0.0)
    , velUncertainty(0.0)  {
  (void)_alloc;
      attUncertainty.assign(0.0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _time_type;
  _time_type time;

   typedef uint16_t _week_type;
  _week_type week;

   typedef uint64_t _utcTime_type;
  _utcTime_type utcTime;

   typedef uint16_t _insStatus_type;
  _insStatus_type insStatus;

   typedef float _yaw_type;
  _yaw_type yaw;

   typedef float _pitch_type;
  _pitch_type pitch;

   typedef float _roll_type;
  _roll_type roll;

   typedef double _latitude_type;
  _latitude_type latitude;

   typedef double _longitude_type;
  _longitude_type longitude;

   typedef double _altitude_type;
  _altitude_type altitude;

   typedef float _nedVelX_type;
  _nedVelX_type nedVelX;

   typedef float _nedVelY_type;
  _nedVelY_type nedVelY;

   typedef float _nedVelZ_type;
  _nedVelZ_type nedVelZ;

   typedef boost::array<float, 3>  _attUncertainty_type;
  _attUncertainty_type attUncertainty;

   typedef float _posUncertainty_type;
  _posUncertainty_type posUncertainty;

   typedef float _velUncertainty_type;
  _velUncertainty_type velUncertainty;





  typedef boost::shared_ptr< ::vectornav::Ins_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vectornav::Ins_<ContainerAllocator> const> ConstPtr;

}; // struct Ins_

typedef ::vectornav::Ins_<std::allocator<void> > Ins;

typedef boost::shared_ptr< ::vectornav::Ins > InsPtr;
typedef boost::shared_ptr< ::vectornav::Ins const> InsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vectornav::Ins_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vectornav::Ins_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vectornav

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'vectornav': ['/home/ubuntu/catkin_ws/src/vectornav/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vectornav::Ins_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vectornav::Ins_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vectornav::Ins_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vectornav::Ins_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vectornav::Ins_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vectornav::Ins_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vectornav::Ins_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f15f75d40252c44bbfc42358abc151e2";
  }

  static const char* value(const ::vectornav::Ins_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf15f75d40252c44bULL;
  static const uint64_t static_value2 = 0xbfc42358abc151e2ULL;
};

template<class ContainerAllocator>
struct DataType< ::vectornav::Ins_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vectornav/Ins";
  }

  static const char* value(const ::vectornav::Ins_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vectornav::Ins_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
float64 time	# GPS time of week in seconds\n\
uint16 week		# GPS week (week)\n\
uint64 utcTime	# The current UTC time. The year is given as a signed byte year offset from the year 2000. E.g. 2013 as 13.\n\
                # Fields:       year    month    day    hour    min    sec    ms\n\
                # Byte offset:  0       1        2      3       4      5      6|7\n\
\n\
# INS Status\n\
# Name		Bit Offset	Format	Description\n\
# Mode		0			2 bits	Indicates the current mode of the INS filter.\n\
#								0 = Not tracking. Insufficient dynamic motion to estimate attitude.\n\
#								1 = Sufficient dynamic motion, but solution not within performance specs.\n\
#								2 = INS is tracking and operating within specifications.\n\
# GpsFix	2			1 bit	Indicates whether the GPS has a proper fix\n\
# Error 	3			4 bits	Sensor measurement error code\n\
#								0 = No errors detected.\n\
# 								Name			Bit Offset	Format	Description\n\
#								Time Error		0			1 bit	High if INS filter loop exceeds 5 ms.\n\
#								IMU Error		1			1 bit	High if IMU communication error is detected.\n\
#								Mag/Pres Error	2			1 bit	High if Magnetometer or Pressure sensor error is detected.\n\
#								GPS Error		3			1 bit	High if GPS communication error is detected.\n\
#Reserved	7			9 bits	Reserved for future use.\n\
uint16 insStatus\n\
\n\
float32 yaw		# Yaw angle relative to true north. (degree)\n\
float32 pitch	# Yaw angle relative to true north (degree)\n\
float32 roll	# Pitch angle relative to horizon (degree)\n\
\n\
float64 latitude	# INS solution position in geodetic latitude (degree)\n\
float64 longitude	# INS solution position in geodetic longitude (degree)\n\
float64 altitude	# Height above ellipsoid. (WGS84) (meter)\n\
\n\
float32 nedVelX		# INS solution velocity in NED frame. (North) (m/s)\n\
float32 nedVelY		# INS solution velocity in NED frame. (East) (m/s)\n\
float32 nedVelZ		# INS solution velocity in NED frame. (Down) (m/s)\n\
\n\
float32[3] attUncertainty	# Uncertainty in attitude estimate (yaw, pitch and roll in degrees)\n\
float32 posUncertainty	# Uncertainty in position estimate (m)\n\
float32 velUncertainty	# Uncertainty in velocity estimate (m/s)\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::vectornav::Ins_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vectornav::Ins_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.time);
      stream.next(m.week);
      stream.next(m.utcTime);
      stream.next(m.insStatus);
      stream.next(m.yaw);
      stream.next(m.pitch);
      stream.next(m.roll);
      stream.next(m.latitude);
      stream.next(m.longitude);
      stream.next(m.altitude);
      stream.next(m.nedVelX);
      stream.next(m.nedVelY);
      stream.next(m.nedVelZ);
      stream.next(m.attUncertainty);
      stream.next(m.posUncertainty);
      stream.next(m.velUncertainty);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Ins_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vectornav::Ins_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vectornav::Ins_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "time: ";
    Printer<double>::stream(s, indent + "  ", v.time);
    s << indent << "week: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.week);
    s << indent << "utcTime: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.utcTime);
    s << indent << "insStatus: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.insStatus);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
    s << indent << "pitch: ";
    Printer<float>::stream(s, indent + "  ", v.pitch);
    s << indent << "roll: ";
    Printer<float>::stream(s, indent + "  ", v.roll);
    s << indent << "latitude: ";
    Printer<double>::stream(s, indent + "  ", v.latitude);
    s << indent << "longitude: ";
    Printer<double>::stream(s, indent + "  ", v.longitude);
    s << indent << "altitude: ";
    Printer<double>::stream(s, indent + "  ", v.altitude);
    s << indent << "nedVelX: ";
    Printer<float>::stream(s, indent + "  ", v.nedVelX);
    s << indent << "nedVelY: ";
    Printer<float>::stream(s, indent + "  ", v.nedVelY);
    s << indent << "nedVelZ: ";
    Printer<float>::stream(s, indent + "  ", v.nedVelZ);
    s << indent << "attUncertainty[]" << std::endl;
    for (size_t i = 0; i < v.attUncertainty.size(); ++i)
    {
      s << indent << "  attUncertainty[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.attUncertainty[i]);
    }
    s << indent << "posUncertainty: ";
    Printer<float>::stream(s, indent + "  ", v.posUncertainty);
    s << indent << "velUncertainty: ";
    Printer<float>::stream(s, indent + "  ", v.velUncertainty);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VECTORNAV_MESSAGE_INS_H
