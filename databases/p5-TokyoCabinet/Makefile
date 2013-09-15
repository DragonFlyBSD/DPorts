# $FreeBSD: databases/p5-TokyoCabinet/Makefile 326900 2013-09-10 13:04:01Z az $

PORTNAME=	TokyoCabinet
PORTVERSION=	1.34
CATEGORIES=	databases perl5
MASTER_SITES=	${MASTER_SITE_LOCAL} \
		http://fallabs.com/tokyocabinet/perlpkg/
MASTER_SITE_SUBDIR=	kuriyama
PKGNAMEPREFIX=	p5-
DISTNAME=	tokyocabinet-perl-${PORTVERSION}

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for TokyoCabinet

LIB_DEPENDS=	tokyocabinet:${PORTSDIR}/databases/tokyocabinet

USES=		perl5
USE_PERL5=	configure

MAN3=	TokyoCabinet.3

.include <bsd.port.mk>
