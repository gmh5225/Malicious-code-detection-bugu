// Code generated by protoc-gen-go-grpc. DO NOT EDIT.
// versions:
// - protoc-gen-go-grpc v1.2.0
// - protoc             v3.19.4
// source: v1/bugu.proto

package v1

import (
	context "context"
	grpc "google.golang.org/grpc"
	codes "google.golang.org/grpc/codes"
	status "google.golang.org/grpc/status"
)

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
// Requires gRPC-Go v1.32.0 or later.
const _ = grpc.SupportPackageIsVersion7

// BuguClient is the client API for Bugu service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://pkg.go.dev/google.golang.org/grpc/?tab=doc#ClientConn.NewStream.
type BuguClient interface {
	Register(ctx context.Context, in *RegisterRequest, opts ...grpc.CallOption) (*RegisterReply, error)
	Login(ctx context.Context, in *LoginRequest, opts ...grpc.CallOption) (*LoginReply, error)
	GetCurrentUser(ctx context.Context, in *GetCurrentUserRequest, opts ...grpc.CallOption) (*GetCurrentUserReply, error)
	UpdateUser(ctx context.Context, in *UpdateUserRequest, opts ...grpc.CallOption) (*UpdateUserReply, error)
	Detect(ctx context.Context, in *DetectRequest, opts ...grpc.CallOption) (*DetectReply, error)
	Confound(ctx context.Context, in *ConfoundRequest, opts ...grpc.CallOption) (Bugu_ConfoundClient, error)
}

type buguClient struct {
	cc grpc.ClientConnInterface
}

func NewBuguClient(cc grpc.ClientConnInterface) BuguClient {
	return &buguClient{cc}
}

func (c *buguClient) Register(ctx context.Context, in *RegisterRequest, opts ...grpc.CallOption) (*RegisterReply, error) {
	out := new(RegisterReply)
	err := c.cc.Invoke(ctx, "/bugu.service.v1.Bugu/Register", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *buguClient) Login(ctx context.Context, in *LoginRequest, opts ...grpc.CallOption) (*LoginReply, error) {
	out := new(LoginReply)
	err := c.cc.Invoke(ctx, "/bugu.service.v1.Bugu/Login", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *buguClient) GetCurrentUser(ctx context.Context, in *GetCurrentUserRequest, opts ...grpc.CallOption) (*GetCurrentUserReply, error) {
	out := new(GetCurrentUserReply)
	err := c.cc.Invoke(ctx, "/bugu.service.v1.Bugu/GetCurrentUser", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *buguClient) UpdateUser(ctx context.Context, in *UpdateUserRequest, opts ...grpc.CallOption) (*UpdateUserReply, error) {
	out := new(UpdateUserReply)
	err := c.cc.Invoke(ctx, "/bugu.service.v1.Bugu/UpdateUser", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *buguClient) Detect(ctx context.Context, in *DetectRequest, opts ...grpc.CallOption) (*DetectReply, error) {
	out := new(DetectReply)
	err := c.cc.Invoke(ctx, "/bugu.service.v1.Bugu/Detect", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *buguClient) Confound(ctx context.Context, in *ConfoundRequest, opts ...grpc.CallOption) (Bugu_ConfoundClient, error) {
	stream, err := c.cc.NewStream(ctx, &Bugu_ServiceDesc.Streams[0], "/bugu.service.v1.Bugu/Confound", opts...)
	if err != nil {
		return nil, err
	}
	x := &buguConfoundClient{stream}
	if err := x.ClientStream.SendMsg(in); err != nil {
		return nil, err
	}
	if err := x.ClientStream.CloseSend(); err != nil {
		return nil, err
	}
	return x, nil
}

type Bugu_ConfoundClient interface {
	Recv() (*ConfoundReply, error)
	grpc.ClientStream
}

type buguConfoundClient struct {
	grpc.ClientStream
}

func (x *buguConfoundClient) Recv() (*ConfoundReply, error) {
	m := new(ConfoundReply)
	if err := x.ClientStream.RecvMsg(m); err != nil {
		return nil, err
	}
	return m, nil
}

// BuguServer is the server API for Bugu service.
// All implementations must embed UnimplementedBuguServer
// for forward compatibility
type BuguServer interface {
	Register(context.Context, *RegisterRequest) (*RegisterReply, error)
	Login(context.Context, *LoginRequest) (*LoginReply, error)
	GetCurrentUser(context.Context, *GetCurrentUserRequest) (*GetCurrentUserReply, error)
	UpdateUser(context.Context, *UpdateUserRequest) (*UpdateUserReply, error)
	Detect(context.Context, *DetectRequest) (*DetectReply, error)
	Confound(*ConfoundRequest, Bugu_ConfoundServer) error
	mustEmbedUnimplementedBuguServer()
}

// UnimplementedBuguServer must be embedded to have forward compatible implementations.
type UnimplementedBuguServer struct {
}

func (UnimplementedBuguServer) Register(context.Context, *RegisterRequest) (*RegisterReply, error) {
	return nil, status.Errorf(codes.Unimplemented, "method Register not implemented")
}
func (UnimplementedBuguServer) Login(context.Context, *LoginRequest) (*LoginReply, error) {
	return nil, status.Errorf(codes.Unimplemented, "method Login not implemented")
}
func (UnimplementedBuguServer) GetCurrentUser(context.Context, *GetCurrentUserRequest) (*GetCurrentUserReply, error) {
	return nil, status.Errorf(codes.Unimplemented, "method GetCurrentUser not implemented")
}
func (UnimplementedBuguServer) UpdateUser(context.Context, *UpdateUserRequest) (*UpdateUserReply, error) {
	return nil, status.Errorf(codes.Unimplemented, "method UpdateUser not implemented")
}
func (UnimplementedBuguServer) Detect(context.Context, *DetectRequest) (*DetectReply, error) {
	return nil, status.Errorf(codes.Unimplemented, "method Detect not implemented")
}
func (UnimplementedBuguServer) Confound(*ConfoundRequest, Bugu_ConfoundServer) error {
	return status.Errorf(codes.Unimplemented, "method Confound not implemented")
}
func (UnimplementedBuguServer) mustEmbedUnimplementedBuguServer() {}

// UnsafeBuguServer may be embedded to opt out of forward compatibility for this service.
// Use of this interface is not recommended, as added methods to BuguServer will
// result in compilation errors.
type UnsafeBuguServer interface {
	mustEmbedUnimplementedBuguServer()
}

func RegisterBuguServer(s grpc.ServiceRegistrar, srv BuguServer) {
	s.RegisterService(&Bugu_ServiceDesc, srv)
}

func _Bugu_Register_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(RegisterRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(BuguServer).Register(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/bugu.service.v1.Bugu/Register",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(BuguServer).Register(ctx, req.(*RegisterRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _Bugu_Login_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(LoginRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(BuguServer).Login(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/bugu.service.v1.Bugu/Login",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(BuguServer).Login(ctx, req.(*LoginRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _Bugu_GetCurrentUser_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(GetCurrentUserRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(BuguServer).GetCurrentUser(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/bugu.service.v1.Bugu/GetCurrentUser",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(BuguServer).GetCurrentUser(ctx, req.(*GetCurrentUserRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _Bugu_UpdateUser_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(UpdateUserRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(BuguServer).UpdateUser(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/bugu.service.v1.Bugu/UpdateUser",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(BuguServer).UpdateUser(ctx, req.(*UpdateUserRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _Bugu_Detect_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(DetectRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(BuguServer).Detect(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/bugu.service.v1.Bugu/Detect",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(BuguServer).Detect(ctx, req.(*DetectRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _Bugu_Confound_Handler(srv interface{}, stream grpc.ServerStream) error {
	m := new(ConfoundRequest)
	if err := stream.RecvMsg(m); err != nil {
		return err
	}
	return srv.(BuguServer).Confound(m, &buguConfoundServer{stream})
}

type Bugu_ConfoundServer interface {
	Send(*ConfoundReply) error
	grpc.ServerStream
}

type buguConfoundServer struct {
	grpc.ServerStream
}

func (x *buguConfoundServer) Send(m *ConfoundReply) error {
	return x.ServerStream.SendMsg(m)
}

// Bugu_ServiceDesc is the grpc.ServiceDesc for Bugu service.
// It's only intended for direct use with grpc.RegisterService,
// and not to be introspected or modified (even as a copy)
var Bugu_ServiceDesc = grpc.ServiceDesc{
	ServiceName: "bugu.service.v1.Bugu",
	HandlerType: (*BuguServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "Register",
			Handler:    _Bugu_Register_Handler,
		},
		{
			MethodName: "Login",
			Handler:    _Bugu_Login_Handler,
		},
		{
			MethodName: "GetCurrentUser",
			Handler:    _Bugu_GetCurrentUser_Handler,
		},
		{
			MethodName: "UpdateUser",
			Handler:    _Bugu_UpdateUser_Handler,
		},
		{
			MethodName: "Detect",
			Handler:    _Bugu_Detect_Handler,
		},
	},
	Streams: []grpc.StreamDesc{
		{
			StreamName:    "Confound",
			Handler:       _Bugu_Confound_Handler,
			ServerStreams: true,
		},
	},
	Metadata: "v1/bugu.proto",
}
