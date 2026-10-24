PORTNAME=	iconv-extra
PORTVERSION=	2.0
PORTREVISION=	1
CATEGORIES=	converters
MASTER_SITES=	LOCAL/bland

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Additional charsets for the iconv library (those from the Unicode site)

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	libbiconv.so:converters/iconv

USES=		perl5 uidfix

PLIST_FILES= @comment\ share/iconv/charset.aliases
.include <bsd.port.mk>
