PORTNAME=	stringencoders
PORTVERSION=	3.10.3
DISTVERSIONPREFIX=	v
PORTREVISION=	3
CATEGORIES=	devel
MASTER_SITES=	http://people.freebsd.org/~skreuzer/distfiles/

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Collection of high performance C-string transformations
WWW=		https://github.com/client9/stringencoders

LICENSE=	MIT

USES=		libtool perl5
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

CFLAGS+= -fsigned-char # chars are unsigned on PowerPC and ARM -Wno-unused-but-set-variable

dfly-patch:
	${REINPLACE_CMD} -e '/EXTRACFLAGS/s/-Werror[[:>:]]//g'	${WRKSRC}/configure

.include <bsd.port.mk>
