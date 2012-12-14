# New ports collection makefile for:    p5-Test-Warn
# Date created:				June 18, 2005
# Whom:	      				Brian Minard <bminard@flatfoot.ca>
#
# $FreeBSD: ports/devel/p5-Test-Warn/Makefile,v 1.13 2012/11/17 05:56:34 svnexp Exp $
#

PORTNAME=	Test-Warn
PORTVERSION=	0.24
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to test methods for warnings

BUILD_DEPENDS=	p5-Carp>=1.22:${PORTSDIR}/devel/p5-Carp \
		p5-Sub-Uplevel>=0.12:${PORTSDIR}/devel/p5-Sub-Uplevel \
		p5-Tree-DAG_Node>=1.02:${PORTSDIR}/devel/p5-Tree-DAG_Node
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Test::Warn.3

.include <bsd.port.mk>
