# New ports collection makefile for:	devel/p5-Sub-Exporter-GlobExporter
# Date created:				2011-09-19
# Whom:					Geraud CONTINSOUZAS <geraud@gcu.info>
#
# $FreeBSD: ports/devel/p5-Sub-Exporter-GlobExporter/Makefile,v 1.2 2012/11/17 05:56:30 svnexp Exp $
#

PORTNAME=	Sub-Exporter-GlobExporter
PORTVERSION=	0.002
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	geraud@gcu.info
COMMENT=	Export shared globs with Sub::Exporter collectors

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-Sub-Exporter>=0.92:${PORTSDIR}/devel/p5-Sub-Exporter
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Sub::Exporter::GlobExporter.3

.include <bsd.port.mk>
