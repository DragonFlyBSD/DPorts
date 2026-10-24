PORTNAME=	libsearpc
PORTVERSION=	3.3.20260612
PORTEPOCH=	2
CATEGORIES=	devel

MAINTAINER=	d.stoye@cms.hu-berlin.de
COMMENT=	Simple RPC framework based on GObject System in C
WWW=		https://github.com/haiwen/libsearpc

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libjansson.so:devel/jansson \
		libgobject-2.0.so:devel/glib20

USE_GITHUB=	yes
GH_ACCOUNT=	haiwen
GH_TAGNAME=	23d5df6

USES=		autoreconf gettext libtool pathfix pkgconfig python shebangfix
SHEBANG_FILES=	lib/searpc-codegen.py
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

post-patch:
	@${REINPLACE_CMD} -e 's#%%PORTVERSION%%#${PORTVERSION}#' ${WRKSRC}/configure.ac

.include <bsd.port.mk>
