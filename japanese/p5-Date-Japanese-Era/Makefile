# Created by: Kimura Fuyuki <fuyuki@mj.0038.net>
# $FreeBSD: japanese/p5-Date-Japanese-Era/Makefile 332802 2013-11-05 01:40:32Z vanilla $

PORTNAME=	Date-Japanese-Era
PORTVERSION=	0.06
CATEGORIES=	japanese perl5
MASTER_SITES=	CPAN

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Conversion between Japanese Era / Gregorian calendar

BUILD_DEPENDS=	p5-Date-Calc>=0:${PORTSDIR}/devel/p5-Date-Calc \
		p5-Lingua-JA-Numbers>=0:${PORTSDIR}/japanese/p5-Lingua-JA-Numbers
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.pre.mk>

PKGNAMEPREFIX:=	${PKGNAMEPREFIX}p5-

.include <bsd.port.post.mk>
