PORTNAME=	cl
PORTVERSION=	1.2.4
DISTVERSIONPREFIX=	cl-
CATEGORIES=	devel
PKGNAMEPREFIX=	erlang-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	OpenCL binding for Erlang
WWW=		https://github.com/tonyrog/cl

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

BUILD_DEPENDS=	opencl>=0:devel/opencl
LIB_DEPENDS=	libOpenCL.so:devel/ocl-icd

USES=		gmake erlang:rebar3 localbase:ldflags

USE_GITHUB=	yes
GH_ACCOUNT=	tonyrog

PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

dfly-patch:
	${REINPLACE_CMD} -e "s|freebsd|dragonfly|g" \
		${WRKSRC}/rebar.config
	${REINPLACE_CMD} -e "s|FreeBSD|DragonFly|g" \
		${WRKSRC}/c_src/Makefile

.include <bsd.port.mk>
