# Created by: Eric Freeman <freebsdports@chillibear.com>
# $FreeBSD: devel/p5-File-Pid-Quick/Makefile 324171 2013-08-02 18:21:05Z az $

PORTNAME=		File-Pid-Quick
PORTVERSION=		1.02
CATEGORIES=		devel perl5
MASTER_SITES=		CPAN
MASTER_SITE_SUBDIR=	File
PKGNAMEPREFIX=		p5-

MAINTAINER=		ports@FreeBSD.org
COMMENT=		Associates a PID file with your script

USES=		perl5
USE_PERL5=	configure

MAN3=	File::Pid::Quick.3

regression-test:
	cd ${WRKSRC} && ${MAKE} test

.include <bsd.port.mk>
