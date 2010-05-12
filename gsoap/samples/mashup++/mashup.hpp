// Reminder: Modify typemap.dat to customize the header file generated by wsdl2h
/* mashup.hpp
   Generated by wsdl2h 1.2.16 from t.wsdl calc.wsdl mashup.wsdl and typemap.dat
   2010-04-01 23:44:21 GMT

   DO NOT INCLUDE THIS FILE DIRECTLY INTO YOUR PROJECT BUILDS
   USE THE soapcpp2-GENERATED SOURCE CODE FILES FOR YOUR PROJECT BUILDS

   gSOAP XML Web services tools.
   Copyright (C) 2001-2010 Robert van Engelen, Genivia Inc. All Rights Reserved.
   Part of this software is released under one of the following licenses:
   GPL or Genivia's license for commercial use.
*/

/** @page page_notes Build Notes

NOTE:

 - Run soapcpp2 on mashup.hpp to generate the SOAP/XML processing logic.
   Use soapcpp2 option -I to specify paths for #import
   To build with STL, 'stlvector.h' is imported from 'import' dir in package.
   Use soapcpp2 option -i to generate improved proxy and server classes.
 - Use wsdl2h options -c and -s to generate pure C code or C++ code without STL.
 - Use 'typemap.dat' to control namespace bindings and type mappings.
   It is strongly recommended to customize the names of the namespace prefixes
   generated by wsdl2h. To do so, modify the prefix bindings in the Namespaces
   section below and add the modified lines to 'typemap.dat' to rerun wsdl2h.
 - Use Doxygen (www.doxygen.org) on this file to generate documentation.
 - Use wsdl2h options -nname and -Nname to globally rename the prefix 'ns'.
 - Use wsdl2h option -d to enable DOM support for xsd:anyType.
 - Use wsdl2h option -g to auto-generate readers and writers for root elements.
 - Struct/class members serialized as XML attributes are annotated with a '@'.
 - Struct/class members that have a special role are annotated with a '$'.

WARNING:

   DO NOT INCLUDE THIS FILE DIRECTLY INTO YOUR PROJECT BUILDS.
   USE THE SOURCE CODE FILES GENERATED BY soapcpp2 FOR YOUR PROJECT BUILDS:
   THE soapStub.h FILE CONTAINS THIS CONTENT WITHOUT ANNOTATIONS.

LICENSE:

@verbatim
--------------------------------------------------------------------------------
gSOAP XML Web services tools
Copyright (C) 2000-2010, Robert van Engelen, Genivia Inc. All Rights Reserved.

This software is released under one of the following two licenses:
1) GPL or 2) Genivia's license for commercial use.
--------------------------------------------------------------------------------
1) GPL license.

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA

Author contact information:
engelen@genivia.com / engelen@acm.org
--------------------------------------------------------------------------------
2) A commercial-use license is available from Genivia, Inc., contact@genivia.com
--------------------------------------------------------------------------------
@endverbatim

*/


//gsoapopt w

/******************************************************************************\
 *                                                                            *
 * Definitions                                                                *
 *                                                                            *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Import                                                                     *
 *                                                                            *
\******************************************************************************/


// STL vector containers (use option -s to remove STL dependency)
#import "stlvector.h"

/******************************************************************************\
 *                                                                            *
 * Schema Namespaces                                                          *
 *                                                                            *
\******************************************************************************/


/* NOTE:

It is strongly recommended to customize the names of the namespace prefixes
generated by wsdl2h. To do so, modify the prefix bindings below and add the
modified lines to typemap.dat to rerun wsdl2h:

ns1 = "http://tempuri.org/t.xsd"
ns2 = "urn:calc"
ns3 = "urn:daystoxmas"

*/

#define SOAP_NAMESPACE_OF_ns1	"http://tempuri.org/t.xsd"
//gsoap ns1   schema namespace:	http://tempuri.org/t.xsd
//gsoap ns1   schema form:	unqualified

#define SOAP_NAMESPACE_OF_ns2	"urn:calc"
//gsoap ns2   schema namespace:	urn:calc
//gsoap ns2   schema form:	unqualified

#define SOAP_NAMESPACE_OF_ns3	"urn:daystoxmas"
//gsoap ns3   schema namespace:	urn:daystoxmas
//gsoap ns3   schema form:	qualified

/******************************************************************************\
 *                                                                            *
 * Built-in Schema Types and Top-Level Elements and Attributes                *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Forward Declarations                                                       *
 *                                                                            *
\******************************************************************************/



//  Forward declaration of class _ns1__gmt.
class _ns1__gmt;

//  Forward declaration of class _ns1__gmtResponse.
class _ns1__gmtResponse;

/// Top-level root element "urn:daystoxmas":daystoxmas.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

//  Forward declaration of class _ns3__commingtotown.
class _ns3__commingtotown;

/******************************************************************************\
 *                                                                            *
 * Schema Types and Top-Level Elements and Attributes                         *
 *   http://tempuri.org/t.xsd                                                 *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Schema Types and Top-Level Elements and Attributes                         *
 *   urn:calc                                                                 *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Schema Types and Top-Level Elements and Attributes                         *
 *   urn:daystoxmas                                                           *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Schema Complex Types and Top-Level Elements                                *
 *   http://tempuri.org/t.xsd                                                 *
 *                                                                            *
\******************************************************************************/



/// Top-level root element "http://tempuri.org/t.xsd":gmt

/// "http://tempuri.org/t.xsd":gmt is a complexType.
class _ns1__gmt
{ public:
/// A handle to the soap struct that manages this instance (automatically set)
    struct soap                         *soap                          ;
};


/// Top-level root element "http://tempuri.org/t.xsd":gmtResponse

/// "http://tempuri.org/t.xsd":gmtResponse is a complexType.
class _ns1__gmtResponse
{ public:
/// Element param-1 of type xs:dateTime.
    time_t*                              param_1                        0;	///< Nullable pointer.
/// A handle to the soap struct that manages this instance (automatically set)
    struct soap                         *soap                          ;
};

/******************************************************************************\
 *                                                                            *
 * Schema Complex Types and Top-Level Elements                                *
 *   urn:calc                                                                 *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Schema Complex Types and Top-Level Elements                                *
 *   urn:daystoxmas                                                           *
 *                                                                            *
\******************************************************************************/



/// Top-level root element "urn:daystoxmas":commingtotown

/// "urn:daystoxmas":commingtotown is a complexType.
class _ns3__commingtotown
{ public:
/// Element days of type xs:int.
    int                                  days                           1;	///< Required element.
/// A handle to the soap struct that manages this instance (automatically set)
    struct soap                         *soap                          ;
};

/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Elements                                              *
 *   http://tempuri.org/t.xsd                                                 *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Attributes                                            *
 *   http://tempuri.org/t.xsd                                                 *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Elements                                              *
 *   urn:calc                                                                 *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Attributes                                            *
 *   urn:calc                                                                 *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Elements                                              *
 *   urn:daystoxmas                                                           *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Attributes                                            *
 *   urn:daystoxmas                                                           *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Services                                                                   *
 *                                                                            *
\******************************************************************************/


//gsoap ns2  service name:	calc 
//gsoap ns2  service type:	calcPortType 
//gsoap ns2  service port:	http://websrv.cs.fsu.edu/~engelen/calcserver.cgi 
//gsoap ns2  service namespace:	urn:calc 
//gsoap ns2  service transport:	http://schemas.xmlsoap.org/soap/http 

//gsoap ns4  service name:	Service 
//gsoap ns4  service type:	ServicePortType 
//gsoap ns4  service port:	http://localhost:80 
//gsoap ns4  service namespace:	http://tempuri.org/t.xsd/Service.wsdl 
//gsoap ns4  service transport:	http://schemas.xmlsoap.org/soap/http 

//gsoap ns5  service name:	mashup 
//gsoap ns5  service type:	PortType 
//gsoap ns5  service port:	http://www.cs.fsu.edu/~engelen/mashup.cgi 
//gsoap ns5  service namespace:	http://www.genivia.com/mashup.wsdl 
//gsoap ns5  service transport:	http://schemas.xmlsoap.org/soap/http 

/** @mainpage Service Definitions

@section Service_bindings Service Bindings
  - @ref calc
  - @ref Service
  - @ref mashup

@section Service_more More Information
- @ref page_notes "Notes"
- @ref page_XMLDataBinding "XML Data Binding"
- @ref SOAP_ENV__Header "SOAP Header Content"
- @ref SOAP_ENV__Detail "SOAP Fault Detail Content" (when applicable)


*/

/**

@page calc Binding "calc"

@section calc_service Service Documentation "calc"
Simple calculator service

@section calc_operations Operations of Binding  "calc"
  - @ref ns2__add
  - @ref ns2__sub
  - @ref ns2__mul
  - @ref ns2__div
  - @ref ns2__pow

@section calc_ports Endpoints of Binding  "calc"
  - http://websrv.cs.fsu.edu/~engelen/calcserver.cgi

Note: use wsdl2h option -N to change the service binding prefix name

*/

/**

@page Service Binding "Service"

@section Service_service Service Documentation "Service"
gSOAP 2.7.16 generated service definition

@section Service_operations Operations of Binding  "Service"
  - @ref __ns4__gmt

@section Service_ports Endpoints of Binding  "Service"
  - http://localhost:80

Note: use wsdl2h option -N to change the service binding prefix name

*/

/**

@page mashup Binding "mashup"

@section mashup_operations Operations of Binding  "mashup"
  - @ref __ns5__dtx

@section mashup_ports Endpoints of Binding  "mashup"
  - http://www.cs.fsu.edu/~engelen/mashup.cgi

Note: use wsdl2h option -N to change the service binding prefix name

*/

/******************************************************************************\
 *                                                                            *
 * Service Binding                                                            *
 *   calc                                                                     *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   ns2__add                                                                 *
 *                                                                            *
\******************************************************************************/


/// Operation "ns2__add" of service binding "calc"

/**

Operation details:

Sums two values
  - SOAP RPC encodingStyle="http://schemas.xmlsoap.org/soap/encoding/"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call_ns2__add(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    double                              a,
    double                              b,
    // response parameters:
    double                             &result
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int ns2__add(
    struct soap *soap,
    // request parameters:
    double                              a,
    double                              b,
    // response parameters:
    double                             &result
  );
@endcode

C++ proxy class (defined in soapcalcProxy.h):
@code
  class calcProxy;
@endcode
Important: use soapcpp2 option '-i' to generate greatly improved and easy-to-use proxy classes;

C++ service class (defined in soapcalcService.h):
@code
  class calcService;
@endcode
Important: use soapcpp2 option '-i' to generate greatly improved and easy-to-use service classes;

*/

//gsoap ns2  service method-style:	add rpc
//gsoap ns2  service method-encoding:	add http://schemas.xmlsoap.org/soap/encoding/
//gsoap ns2  service method-action:	add ""
int ns2__add(
    double                              a,	///< Request parameter
    double                              b,	///< Request parameter
    double                             &result	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   ns2__sub                                                                 *
 *                                                                            *
\******************************************************************************/


/// Operation "ns2__sub" of service binding "calc"

/**

Operation details:

Subtracts two values
  - SOAP RPC encodingStyle="http://schemas.xmlsoap.org/soap/encoding/"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call_ns2__sub(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    double                              a,
    double                              b,
    // response parameters:
    double                             &result
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int ns2__sub(
    struct soap *soap,
    // request parameters:
    double                              a,
    double                              b,
    // response parameters:
    double                             &result
  );
@endcode

C++ proxy class (defined in soapcalcProxy.h):
@code
  class calcProxy;
@endcode
Important: use soapcpp2 option '-i' to generate greatly improved and easy-to-use proxy classes;

C++ service class (defined in soapcalcService.h):
@code
  class calcService;
@endcode
Important: use soapcpp2 option '-i' to generate greatly improved and easy-to-use service classes;

*/

//gsoap ns2  service method-style:	sub rpc
//gsoap ns2  service method-encoding:	sub http://schemas.xmlsoap.org/soap/encoding/
//gsoap ns2  service method-action:	sub ""
int ns2__sub(
    double                              a,	///< Request parameter
    double                              b,	///< Request parameter
    double                             &result	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   ns2__mul                                                                 *
 *                                                                            *
\******************************************************************************/


/// Operation "ns2__mul" of service binding "calc"

/**

Operation details:

Multiplies two values
  - SOAP RPC encodingStyle="http://schemas.xmlsoap.org/soap/encoding/"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call_ns2__mul(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    double                              a,
    double                              b,
    // response parameters:
    double                             &result
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int ns2__mul(
    struct soap *soap,
    // request parameters:
    double                              a,
    double                              b,
    // response parameters:
    double                             &result
  );
@endcode

C++ proxy class (defined in soapcalcProxy.h):
@code
  class calcProxy;
@endcode
Important: use soapcpp2 option '-i' to generate greatly improved and easy-to-use proxy classes;

C++ service class (defined in soapcalcService.h):
@code
  class calcService;
@endcode
Important: use soapcpp2 option '-i' to generate greatly improved and easy-to-use service classes;

*/

//gsoap ns2  service method-style:	mul rpc
//gsoap ns2  service method-encoding:	mul http://schemas.xmlsoap.org/soap/encoding/
//gsoap ns2  service method-action:	mul ""
int ns2__mul(
    double                              a,	///< Request parameter
    double                              b,	///< Request parameter
    double                             &result	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   ns2__div                                                                 *
 *                                                                            *
\******************************************************************************/


/// Operation "ns2__div" of service binding "calc"

/**

Operation details:

Divides two values
  - SOAP RPC encodingStyle="http://schemas.xmlsoap.org/soap/encoding/"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call_ns2__div(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    double                              a,
    double                              b,
    // response parameters:
    double                             &result
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int ns2__div(
    struct soap *soap,
    // request parameters:
    double                              a,
    double                              b,
    // response parameters:
    double                             &result
  );
@endcode

C++ proxy class (defined in soapcalcProxy.h):
@code
  class calcProxy;
@endcode
Important: use soapcpp2 option '-i' to generate greatly improved and easy-to-use proxy classes;

C++ service class (defined in soapcalcService.h):
@code
  class calcService;
@endcode
Important: use soapcpp2 option '-i' to generate greatly improved and easy-to-use service classes;

*/

//gsoap ns2  service method-style:	div rpc
//gsoap ns2  service method-encoding:	div http://schemas.xmlsoap.org/soap/encoding/
//gsoap ns2  service method-action:	div ""
int ns2__div(
    double                              a,	///< Request parameter
    double                              b,	///< Request parameter
    double                             &result	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   ns2__pow                                                                 *
 *                                                                            *
\******************************************************************************/


/// Operation "ns2__pow" of service binding "calc"

/**

Operation details:

Raises a to b
  - SOAP RPC encodingStyle="http://schemas.xmlsoap.org/soap/encoding/"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call_ns2__pow(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    double                              a,
    double                              b,
    // response parameters:
    double                             &result
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int ns2__pow(
    struct soap *soap,
    // request parameters:
    double                              a,
    double                              b,
    // response parameters:
    double                             &result
  );
@endcode

C++ proxy class (defined in soapcalcProxy.h):
@code
  class calcProxy;
@endcode
Important: use soapcpp2 option '-i' to generate greatly improved and easy-to-use proxy classes;

C++ service class (defined in soapcalcService.h):
@code
  class calcService;
@endcode
Important: use soapcpp2 option '-i' to generate greatly improved and easy-to-use service classes;

*/

//gsoap ns2  service method-style:	pow rpc
//gsoap ns2  service method-encoding:	pow http://schemas.xmlsoap.org/soap/encoding/
//gsoap ns2  service method-action:	pow ""
int ns2__pow(
    double                              a,	///< Request parameter
    double                              b,	///< Request parameter
    double                             &result	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * Service Binding                                                            *
 *   Service                                                                  *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   __ns4__gmt                                                               *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns4__gmt" of service binding "Service"

/**

Operation details:

Service definition of function t__gmt
  - SOAP document/literal style

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns4__gmt(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    _ns1__gmt*                          ns1__gmt,
    // response parameters:
    _ns1__gmtResponse*                  ns1__gmtResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns4__gmt(
    struct soap *soap,
    // request parameters:
    _ns1__gmt*                          ns1__gmt,
    // response parameters:
    _ns1__gmtResponse*                  ns1__gmtResponse
  );
@endcode

C++ proxy class (defined in soapServiceProxy.h):
@code
  class ServiceProxy;
@endcode
Important: use soapcpp2 option '-i' to generate greatly improved and easy-to-use proxy classes;

C++ service class (defined in soapServiceService.h):
@code
  class ServiceService;
@endcode
Important: use soapcpp2 option '-i' to generate greatly improved and easy-to-use service classes;

*/

//gsoap ns4  service method-style:	gmt document
//gsoap ns4  service method-encoding:	gmt literal
//gsoap ns4  service method-action:	gmt ""
int __ns4__gmt(
    _ns1__gmt*                          ns1__gmt,	///< Request parameter
    _ns1__gmtResponse*                  ns1__gmtResponse	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * Service Binding                                                            *
 *   mashup                                                                   *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   __ns5__dtx                                                               *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns5__dtx" of service binding "mashup"

/**

Operation details:

  - SOAP document/literal style

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns5__dtx(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    _XML                                ns3__daystoxmas,
    // response parameters:
    _ns3__commingtotown*                ns3__commingtotown
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns5__dtx(
    struct soap *soap,
    // request parameters:
    _XML                                ns3__daystoxmas,
    // response parameters:
    _ns3__commingtotown*                ns3__commingtotown
  );
@endcode

C++ proxy class (defined in soapmashupProxy.h):
@code
  class mashupProxy;
@endcode
Important: use soapcpp2 option '-i' to generate greatly improved and easy-to-use proxy classes;

C++ service class (defined in soapmashupService.h):
@code
  class mashupService;
@endcode
Important: use soapcpp2 option '-i' to generate greatly improved and easy-to-use service classes;

*/

//gsoap ns5  service method-style:	dtx document
//gsoap ns5  service method-encoding:	dtx literal
//gsoap ns5  service method-action:	dtx ""
int __ns5__dtx(
    _XML                                ns3__daystoxmas,	///< Request parameter
    _ns3__commingtotown*                ns3__commingtotown	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * XML Data Binding                                                           *
 *                                                                            *
\******************************************************************************/


/**

@page page_XMLDataBinding XML Data Binding

SOAP/XML services use data bindings contractually bound by WSDL and auto-
generated by wsdl2h and soapcpp2 (see Service Bindings). Plain data bindings
are adopted from XML schemas as part of the WSDL types section or when running
wsdl2h on a set of schemas to produce non-SOAP-based XML data bindings.

The following readers and writers are C/C++ data type (de)serializers auto-
generated by wsdl2h and soapcpp2. Run soapcpp2 on this file to generate the
(de)serialization code, which is stored in soapC.c[pp]. Include "soapH.h" in
your code to import these data type and function declarations. Only use the
soapcpp2-generated files in your project build. Do not include the wsdl2h-
generated .h file in your code.

XML content can be retrieved from:
  - a FILE* fd, using soap->recvfd = fd
  - a socket, using soap->socket = ...
  - a C++ stream, using soap->is = ...
  - a buffer, using the soap->frecv() callback

XML content can be stored to:
  - a FILE* fd, using soap->sendfd = fd
  - a socket, using soap->socket = ...
  - a C++ stream, using soap->os = ...
  - a buffer, using the soap->fsend() callback


@section ns1 Top-level root elements of schema "http://tempuri.org/t.xsd"

  - <ns1:gmt> @ref _ns1__gmt
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns1__gmt(struct soap*, _ns1__gmt*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns1__gmt(struct soap*, _ns1__gmt*);
    @endcode

  - <ns1:gmtResponse> @ref _ns1__gmtResponse
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns1__gmtResponse(struct soap*, _ns1__gmtResponse*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns1__gmtResponse(struct soap*, _ns1__gmtResponse*);
    @endcode

@section ns2 Top-level root elements of schema "urn:calc"

@section ns3 Top-level root elements of schema "urn:daystoxmas"

  - <ns3:daystoxmas> @ref _ns3__daystoxmas
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns3__daystoxmas(struct soap*, _XML);
    // Writer (returns SOAP_OK on success):
    soap_write__ns3__daystoxmas(struct soap*, _XML);
    @endcode

  - <ns3:commingtotown> @ref _ns3__commingtotown
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns3__commingtotown(struct soap*, _ns3__commingtotown*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns3__commingtotown(struct soap*, _ns3__commingtotown*);
    @endcode

*/

/* End of mashup.hpp */
