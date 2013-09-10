# Created by: Geraud CONTINSOUZAS <geraud@gcu.info>
# $FreeBSD: devel/p5-Sub-Exporter-GlobExporter/Makefile 326803 2013-09-09 11:55:30Z az $

PORTNAME=	Sub-Exporter-GlobExporter
PORTVERSION=	0.003
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RJBS
PKGNAMEPREFIX=	p5-

MAINTAINER=	geraud@gcu.info
COMMENT=	Export shared globs with Sub::Exporter collectors

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-Sub-Exporter>=0:${PORTSDIR}/devel/p5-Sub-Exporter
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Sub::Exporter::GlobExporter.3

.include <bsd.port.mk>
