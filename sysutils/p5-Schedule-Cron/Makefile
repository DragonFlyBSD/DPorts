# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: sysutils/p5-Schedule-Cron/Makefile 338851 2014-01-06 09:44:19Z az $

PORTNAME=	Schedule-Cron
PORTVERSION=	1.01
CATEGORIES=	sysutils perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Schedule::Cron - cron-like scheduler for Perl subroutines

RUN_DEPENDS=	p5-Time-modules>=0:${PORTSDIR}/devel/p5-Time-modules
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
