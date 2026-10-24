PORTNAME=	mono
PORTVERSION=	${MONO_DEFAULT}
CATEGORIES=	lang

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Meta-port for the default version of the Mono framework
WWW=		https://www.mono-project.com/

RUN_DEPENDS=	mono${MONO_DEFAULT}>0:lang/mono${MONO_DEFAULT}

USES= metaport localbase

DFLY_ALLOW_REMAKE= increases chances of building exponentially
LIB_DEPENDS= libcharset.so:converters/libiconv
CONFIGURE_ARGS= ac_cv_header_localcharset_h=yes ac_cv_lib_charset_locale_charset=yes
dfly-patch:
	${REINPLACE_CMD} -e 's@LIBS+="-liconv -lcharset"@LIBS="-liconv -lcharset $$LIBS"@g' \
		${WRKSRC}/configure ${WRKSRC}/configure.ac

.include <bsd.port.mk>
