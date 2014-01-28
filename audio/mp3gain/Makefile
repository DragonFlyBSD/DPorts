# Created by: Simon 'corecode' Schubert <corecode@corecode.ath.cx>
# $FreeBSD: audio/mp3gain/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	mp3gain
PORTVERSION=	1.5.2
CATEGORIES=	audio
MASTER_SITES=	SF
DISTNAME=	${PORTNAME}-${PORTVERSION:C/\./_/g}-src

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	Tool to normalize the gain of MP3 files

LICENSE=	LGPL21

USES=		uidfix

USE_ZIP=	yes
USES=		dos2unix
NO_WRKSUBDIR=	yes
PLIST_FILES=	bin/mp3gain

post-patch:
	@${CP} ${FILESDIR}/Makefile.main ${WRKSRC}/Makefile
	@${CP} ${FILESDIR}/Makefile.lib ${WRKSRC}/mpglibDBL/Makefile

.include <bsd.port.mk>
