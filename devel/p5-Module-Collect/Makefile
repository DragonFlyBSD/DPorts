# New ports collection makefile for:	Module::Collect
# Date created:		22 Jan 2009
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Module-Collect/Makefile,v 1.4 2012/11/17 05:56:21 svnexp Exp $
#

PORTNAME=	Module-Collect
PORTVERSION=	0.06
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to collect module files from some directories

RUN_DEPENDS=	\
	p5-File-Find-Rule>0:${PORTSDIR}/devel/p5-File-Find-Rule
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Module::Collect.3 \
		Module::README.3 \
		Module::Collect::Package.3

.include <bsd.port.mk>
