# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: japanese/kcode/Makefile 327737 2013-09-20 18:47:54Z bapt $

PORTNAME=	kcode
PORTVERSION=	1.0
CATEGORIES=	japanese
MASTER_SITES=	http://www.irori.org/dl/tool/
DISTFILES=	${PORTNAME}-${PORTVERSION}.gz
EXTRACT_ONLY=	${DISTFILES}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Handy utility to show codepoint information of given characters

USES=		shebangfix perl5
USE_PERL5=	extract run
NO_WRKSUBDIR=	yes
NO_BUILD=	yes
SHEBANG_FILES=	kcode
perl_OLD_CMD=	/usr/bin/env perl

MANLANG=	ja
MAN1=		kcode.1
MANCOMPRESSED=	no
PLIST_FILES=	bin/kcode

RUN_DEPENDS=	ja-p5-Jcode>=0:${PORTSDIR}/japanese/p5-Jcode

NO_STAGE=	yes
do-extract:
	${MKDIR} ${WRKSRC}
	${GZCAT} ${DISTDIR}/${DIST_SUBDIR}/${DISTFILES} > ${WRKSRC}/kcode
	pod2man ${WRKSRC}/kcode ${WRKSRC}/kcode.1

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/kcode ${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/kcode.1 ${MAN1PREFIX}/man/ja/man1/

.include <bsd.port.mk>
