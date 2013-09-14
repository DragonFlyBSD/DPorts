# Created by: Ying-Chieh Liao <ijliao@FreeBSD.org>
# $FreeBSD: shells/vshnu/Makefile 327035 2013-09-12 06:27:41Z az $

PORTNAME=	vshnu
PORTVERSION=	1.0305
CATEGORIES=	shells perl5
MASTER_SITES=	http://www.cs.indiana.edu/~kinzler/${PORTNAME}/
EXTRACT_SUFX=	.tgz

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	New Visual Shell

BUILD_DEPENDS=	p5-Term-Screen>=0:${PORTSDIR}/devel/p5-Term-Screen
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
