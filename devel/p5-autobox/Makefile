# Created by: Bill Brinzer <bill.brinzer@gmail.com>
# $FreeBSD: devel/p5-autobox/Makefile 326857 2013-09-10 03:32:30Z az $

PORTNAME=	autobox
PORTVERSION=	2.77
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:CHOCOLATE
PKGNAMEPREFIX=	p5-

MAINTAINER=	bill.brinzer@gmail.com
COMMENT=	Call methods on native Perl types

BUILD_DEPENDS=	p5-Scope-Guard>=0.20:${PORTSDIR}/devel/p5-Scope-Guard
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	autobox.3

.include <bsd.port.mk>
