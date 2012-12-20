# New ports collection makefile for:	p5-Perl-Critic-Deprecated
# Date created:		2012-03-14
# Whom:			Steve Wills <swills@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Perl-Critic-Deprecated/Makefile,v 1.3 2012/11/17 05:56:26 svnexp Exp $
#

PORTNAME=	Perl-Critic-Deprecated
PORTVERSION=	1.108
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Policies that were formally included with Perl::Critic itself, but which have been superseded by others

BUILD_DEPENDS=	p5-Perl-Critic>=0:${PORTSDIR}/textproc/p5-Perl-Critic
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Perl::Critic::Deprecated.3 \
	Perl::Critic::Policy::NamingConventions::ProhibitMixedCaseSubs.3 \
	Perl::Critic::Policy::NamingConventions::ProhibitMixedCaseVars.3 \
	Perl::Critic::Utils::PPIRegexp.3

.include <bsd.port.mk>
