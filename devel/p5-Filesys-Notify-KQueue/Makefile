# $FreeBSD: devel/p5-Filesys-Notify-KQueue/Makefile 326839 2013-09-09 18:34:59Z az $

PORTNAME=	Filesys-Notify-KQueue
PORTVERSION=	0.08
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to wrap IO::KQueue for watching file system

RUN_DEPENDS=	\
	p5-IO-KQueue>0:${PORTSDIR}/devel/p5-IO-KQueue
BUILD_DEPENDS:=	${RUN_DEPENDS}
TEST_DEPENDS=	p5-Test-SharedFork>=0.19:${PORTSDIR}/devel/p5-Test-SharedFork

USES=		perl5
USE_PERL5=	configure

MAN3=	Filesys::Notify::KQueue.3 \
	Filesys::Notify::README.3

.include <bsd.port.mk>
