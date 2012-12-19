# $FreeBSD: ports/devel/p5-TAP-SimpleOutput/Makefile,v 1.1 2012/12/09 17:42:18 svnexp Exp $

PORTNAME=	TAP-SimpleOutput
PORTVERSION=	0.001
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	TAP
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Simple closure-driven TAP generator

BUILD_DEPENDS=	p5-Sub-Exporter>=0:${PORTSDIR}/devel/p5-Sub-Exporter
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	TAP::SimpleOutput.3

.include <bsd.port.mk>
