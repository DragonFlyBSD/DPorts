# Created by: Geraud CONTINSOUZAS <geraud@gcu.info>
# $FreeBSD: databases/p5-KyotoCabinet/Makefile 327717 2013-09-20 16:13:47Z bapt $

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

LIB_DEPENDS=	kyotocabinet:${PORTSDIR}/databases/kyotocabinet

USES=		perl5
USE_PERL5=	configure

MAN3=	KyotoCabinet.3

NO_STAGE=	yes
.include <bsd.port.mk>
