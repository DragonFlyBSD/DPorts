# New ports collection makefile for:	Dist-CheckConflicts
# Date created:		9 February 2011
# Whom:		milki <milki@rescomp.berkeley.edu>
#
# $FreeBSD: devel/p5-Dist-CheckConflicts/Makefile 321187 2013-06-18 13:49:02Z az $
#

PORTNAME=	Dist-CheckConflicts
PORTVERSION=	0.02
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DOY
PKGNAMEPREFIX=	p5-

MAINTAINER=	milki@rescomp.berkeley.edu
COMMENT=	Declare version conflicts for your dist

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-List-MoreUtils>=0.12:${PORTSDIR}/lang/p5-List-MoreUtils \
		p5-Sub-Exporter>=0:${PORTSDIR}/devel/p5-Sub-Exporter

TEST_DEPENDS=	p5-Test-Fatal>=0:${PORTSDIR}/devel/p5-Test-Fatal

PERL_CONFIGURE=	yes

MAN3=		Dist::CheckConflicts.3

.include <bsd.port.mk>
