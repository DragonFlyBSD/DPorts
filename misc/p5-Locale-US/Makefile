# Created by: Tomoyuki Sakurai <cherry@trombik.org>
# $FreeBSD: misc/p5-Locale-US/Makefile 324054 2013-07-31 14:36:21Z az $

PORTNAME=	Locale-US
PORTVERSION=	2.112.150
CATEGORIES=	misc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Two letter codes for state identification in the United States

BUILD_DEPENDS=	p5-Data-Section-Simple>=0:${PORTSDIR}/devel/p5-Data-Section-Simple
RUN_DEPENDS=	p5-Data-Section-Simple>=0:${PORTSDIR}/devel/p5-Data-Section-Simple

USES=		perl5
USE_PERL5=	configure

MAN3=		Locale::US.3

.include <bsd.port.mk>
