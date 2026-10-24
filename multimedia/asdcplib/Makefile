PORTNAME=	asdcplib
DISTVERSION=	2.13.2
CATEGORIES=	multimedia

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Library and tools for working with MXF and DCP files
WWW=		https://github.com/cinecert/asdcplib

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libexpat.so:textproc/expat2

USES=		autoreconf compiler:c++11-lang gmake libtool pathfix ssl
USE_GITHUB=	yes
GH_ACCOUNT=	cinecert
GH_TAGNAME=	rel_${DISTVERSION:S/./_/g}
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-dev-headers \
		--with-expat=${LOCALBASE} \
		--with-openssl=${OPENSSLBASE}
INSTALL_TARGET=	install-strip

PLIST_SUB=	LIBVER=${DISTVERSION}

OPTIONS_DEFINE=		AS02 JXS PHDR
OPTIONS_DEFAULT=	AS02
OPTIONS_SUB=		yes

AS02_DESC=	SMPTE ST 2067-5 (AS-02 / IMF) support
JXS_DESC=	JPEG XS file wrapping support
PHDR_DESC=	Prototype for High Dynamic Range (P-HDR) support

AS02_CONFIGURE_ENABLE=	as-02
JXS_CONFIGURE_ENABLE=	asdcp-jxs
PHDR_IMPLIES=	AS02
PHDR_CONFIGURE_ENABLE=	phdr

.include <bsd.port.mk>
