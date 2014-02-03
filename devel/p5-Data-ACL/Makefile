# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: devel/p5-Data-ACL/Makefile 341711 2014-01-29 10:57:06Z az $

PORTNAME=	Data-ACL
PORTVERSION=	0.02
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Data::ACL - Perl extension for simple ACL lists

BUILD_DEPENDS=	p5-Set-NestedGroups>=0:${PORTSDIR}/devel/p5-Set-NestedGroups
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
