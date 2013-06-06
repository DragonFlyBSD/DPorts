# $FreeBSD: devel/p5-Data-MessagePack/Makefile 318551 2013-05-19 22:28:39Z kuriyama $

PORTNAME=	Data-MessagePack
PORTVERSION=	0.47
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:GFUJI
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for MessagePack

TEST_DEPENDS=	p5-Test-Requires>=0:${PORTSDIR}/devel/p5-Test-Requires \
		p5-Test-LeakTrace>0:${PORTSDIR}/devel/p5-Test-LeakTrace

PERL_CONFIGURE=	yes
CONFIGURE_ARGS=	--xs

MAKE_JOBS_UNSAFE=	yes

MAN3=	Data::MessagePack.3 \
	Data::MessagePack::PP.3 \
	Data::MessagePack::Unpacker.3

.include <bsd.port.mk>
