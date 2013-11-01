# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: devel/p5-Perl-Critic-Deprecated/Makefile 331886 2013-10-28 18:46:29Z sunpoet $

PORTNAME=	Perl-Critic-Deprecated
PORTVERSION=	1.118
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
