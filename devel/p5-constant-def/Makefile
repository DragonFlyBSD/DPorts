# Created by: Mons Anderson <mons@cpan.org>
# $FreeBSD: devel/p5-constant-def/Makefile 326636 2013-09-07 14:07:59Z az $

PORTNAME=	constant-def
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	mons@cpan.org
COMMENT=	Declare only undeclared constants

BUILD_DEPENDS=	p5-ex-lib>=0.06:${PORTSDIR}/devel/p5-ex-lib
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		constant::def.3 constant::abs.3

.include <bsd.port.mk>
