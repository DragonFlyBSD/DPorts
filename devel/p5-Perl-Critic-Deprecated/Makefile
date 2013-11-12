# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: devel/p5-Perl-Critic-Deprecated/Makefile 332535 2013-11-02 19:55:49Z sunpoet $

PORTNAME=	Perl-Critic-Deprecated
PORTVERSION=	1.119
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Policies were included with Perl::Critic but superseded by others

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Perl-Critic>=0:${PORTSDIR}/textproc/p5-Perl-Critic
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
