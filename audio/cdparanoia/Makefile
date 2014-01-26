# Created by: Simon 'corecode' Schubert <corecode@corecode.ath.cx>
# $FreeBSD: audio/cdparanoia/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	cdparanoia
PORTVERSION=	3.9.8
PORTREVISION=	9
CATEGORIES=	audio sysutils
MASTER_SITES=	http://www.xiph.org/paranoia/download/
DISTNAME=	${PORTNAME}-${PORTVERSION:C/^3\./III-alpha/}
EXTRACT_SUFX=	.src.tgz

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	A CDDA extraction tool (also known as ripper)

GNU_CONFIGURE=	yes
NO_STAGE=	yes
USES=		gmake
USE_LDCONFIG=	yes

MAN1=		cdparanoia.1

post-patch:
	@${REINPLACE_CMD} -e 's/\(^ *default:\)/\1break;/' ${WRKSRC}/interface/utils.h

.include <bsd.port.mk>
