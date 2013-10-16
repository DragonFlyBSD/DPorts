# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: devel/p5-Module-Info-File/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Module-Info-File
PORTVERSION=	0.11
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Module
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Retrieves module information from a file or script

RUN_DEPENDS=	p5-Module-Info>0.20:${PORTSDIR}/devel/p5-Module-Info
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

MAN1=		version.pl.1
MAN3=		Module::Info::File.3

NO_STAGE=	yes
.include <bsd.port.mk>
