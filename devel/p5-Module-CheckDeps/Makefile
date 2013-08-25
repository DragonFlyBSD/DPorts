# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: devel/p5-Module-CheckDeps/Makefile 325163 2013-08-21 17:42:57Z sunpoet $

PORTNAME=	Module-CheckDeps
PORTVERSION=	0.08
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ALEXBIO
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Very simple dependencies checker for Perl code

BUILD_DEPENDS=	p5-PPI>=0:${PORTSDIR}/textproc/p5-PPI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	configure
USES=		perl5

MAN1=		checkdeps.1
MAN3=		Module::CheckDeps.3

.include <bsd.port.mk>
