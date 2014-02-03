# Created by: Philip Paeps <philip@paeps.cx>
# $FreeBSD: devel/p5-Date-Roman/Makefile 341953 2014-01-31 09:15:24Z az $

PORTNAME=	Date-Roman
PORTVERSION=	1.06
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	philip@FreeBSD.org
COMMENT=	Perl module to play with Roman dates

BUILD_DEPENDS=	p5-Roman>=0:${PORTSDIR}/math/p5-Roman
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
