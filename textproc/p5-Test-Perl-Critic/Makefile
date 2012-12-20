# New ports collection makefile for:	p5-Test-Perl-Critic
# Date created:				2007/06/07
# Whom:					chinsan
#
# $FreeBSD: ports/textproc/p5-Test-Perl-Critic/Makefile,v 1.6 2012/11/17 06:02:09 svnexp Exp $
#

PORTNAME=	Test-Perl-Critic
PORTVERSION=	1.02
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Use Perl::Critic in test programs

BUILD_DEPENDS=	p5-Perl-Critic>=0:${PORTSDIR}/textproc/p5-Perl-Critic
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Test::Perl::Critic.3

.include <bsd.port.mk>
