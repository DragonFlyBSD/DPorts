# Created by: chinsan
# $FreeBSD: textproc/p5-Test-Perl-Critic/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	Test-Perl-Critic
PORTVERSION=	1.02
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Use Perl::Critic in test programs

BUILD_DEPENDS=	p5-Perl-Critic>=0:${PORTSDIR}/textproc/p5-Perl-Critic
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Test::Perl::Critic.3

NO_STAGE=	yes
.include <bsd.port.mk>
