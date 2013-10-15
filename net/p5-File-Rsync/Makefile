# Created by: petef@FreeBSD.org
# $FreeBSD: net/p5-File-Rsync/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	File-Rsync
PORTVERSION=	0.43
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl convenience wrapper for the rsync(1) program

RUN_DEPENDS=	rsync:${PORTSDIR}/net/rsync
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		File::Rsync.3

NO_STAGE=	yes
.include <bsd.port.mk>
