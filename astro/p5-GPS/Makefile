# Created by: Jeremy Shaffner <jeremy@external.org>
# $FreeBSD: astro/p5-GPS/Makefile 331567 2013-10-25 11:20:05Z ehaupt $

PORTNAME=	GPS
PORTVERSION=	0.17
CATEGORIES=	astro perl5 geography
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	perl-GPS-${PORTVERSION}

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Perl interface to GPS receivers

BUILD_DEPENDS=	p5-Device-SerialPort>=0.07:${PORTSDIR}/comms/p5-Device-SerialPort
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
