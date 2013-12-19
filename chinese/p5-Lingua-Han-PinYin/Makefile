# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: chinese/p5-Lingua-Han-PinYin/Makefile 335986 2013-12-09 14:09:13Z sunpoet $

PORTNAME=	Lingua-Han-PinYin
PORTVERSION=	0.20
CATEGORIES=	chinese perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Retrieve the Mandarin (PinYin) of Chinese character (HanZi)

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Lingua-Han-Utils>=0.10:${PORTSDIR}/chinese/p5-Lingua-Han-Utils
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
