# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: lang/p5-Switch/Makefile 324276 2013-08-05 15:05:29Z az $

PORTNAME=	Switch
PORTVERSION=	2.16
CATEGORIES=	lang perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RGARCIA
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Switch - A switch statement for Perl

BUILD_DEPENDS=	p5-Filter>0:${PORTSDIR}/devel/p5-Filter
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Switch.3

.include <bsd.port.mk>
