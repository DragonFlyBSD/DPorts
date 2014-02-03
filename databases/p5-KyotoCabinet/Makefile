# Created by: Geraud CONTINSOUZAS <geraud@gcu.info>
# $FreeBSD: databases/p5-KyotoCabinet/Makefile 341762 2014-01-29 17:18:46Z az $

PORTNAME=	KyotoCabinet
PORTVERSION=	1.18
PORTREVISION=	5
CATEGORIES=	databases perl5
MASTER_SITES=	http://fallabs.com/kyotocabinet/perlpkg/
PKGNAMEPREFIX=	p5-
DISTNAME=	kyotocabinet-perl-${PORTVERSION}

MAINTAINER=	geraud@gcu.info
COMMENT=	Perl extension for KyotoCabinet

LICENSE=	GPLv3

LIB_DEPENDS=	libkyotocabinet.so:${PORTSDIR}/databases/kyotocabinet

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
