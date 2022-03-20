// Generated by gencpp from file rs_yolo/Info.msg
// DO NOT EDIT!


#ifndef RS_YOLO_MESSAGE_INFO_H
#define RS_YOLO_MESSAGE_INFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rs_yolo
{
template <class ContainerAllocator>
struct Info_
{
  typedef Info_<ContainerAllocator> Type;

  Info_()
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , classification()  {
    }
  Info_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , classification(_alloc)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _classification_type;
  _classification_type classification;





  typedef boost::shared_ptr< ::rs_yolo::Info_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rs_yolo::Info_<ContainerAllocator> const> ConstPtr;

}; // struct Info_

typedef ::rs_yolo::Info_<std::allocator<void> > Info;

typedef boost::shared_ptr< ::rs_yolo::Info > InfoPtr;
typedef boost::shared_ptr< ::rs_yolo::Info const> InfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rs_yolo::Info_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rs_yolo::Info_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rs_yolo::Info_<ContainerAllocator1> & lhs, const ::rs_yolo::Info_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z &&
    lhs.classification == rhs.classification;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rs_yolo::Info_<ContainerAllocator1> & lhs, const ::rs_yolo::Info_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rs_yolo

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::rs_yolo::Info_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rs_yolo::Info_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rs_yolo::Info_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rs_yolo::Info_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rs_yolo::Info_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rs_yolo::Info_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rs_yolo::Info_<ContainerAllocator> >
{
  static const char* value()
  {
    return "82d1159b13041461343d20c791a8a740";
  }

  static const char* value(const ::rs_yolo::Info_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x82d1159b13041461ULL;
  static const uint64_t static_value2 = 0x343d20c791a8a740ULL;
};

template<class ContainerAllocator>
struct DataType< ::rs_yolo::Info_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rs_yolo/Info";
  }

  static const char* value(const ::rs_yolo::Info_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rs_yolo::Info_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x\n"
"float64 y\n"
"float64 z\n"
"string classification\n"
;
  }

  static const char* value(const ::rs_yolo::Info_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rs_yolo::Info_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.classification);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Info_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rs_yolo::Info_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rs_yolo::Info_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
    s << indent << "classification: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.classification);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RS_YOLO_MESSAGE_INFO_H