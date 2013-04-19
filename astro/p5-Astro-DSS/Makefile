# Created by: ijliao
# $FreeBSD: astro/p5-Astro-DSS/Makefile 315509 2013-03-29 00:44:53Z eadler $

PORTNAME=	Astro-DSS
PORTVERSION=	1.6.1
CATEGORIES=	astro perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Astro
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	OO interface to the 1st and 2nd Digital Sky Surveys

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww

MAKE_JOBS_SAFE=  yes

PERL_CONFIGURE=	yes

MAN3=	Astro::DSS.3

.include <bsd.port.mk>
