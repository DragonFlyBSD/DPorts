# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: security/p5-Sudo/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	Sudo
PORTVERSION=	0.33
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:WAG
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for running a command line sudo

BUILD_DEPENDS=	p5-Term-ReadPassword>=0:${PORTSDIR}/devel/p5-Term-ReadPassword \
		p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor \
		p5-IPC-Run>=0:${PORTSDIR}/devel/p5-IPC-Run
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
