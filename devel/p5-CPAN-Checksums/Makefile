# Created by: Cezary Morga <cm@therek.net>
# $FreeBSD: head/devel/p5-CPAN-Checksums/Makefile 331856 2013-10-28 13:46:25Z vanilla $

PORTNAME=	CPAN-Checksums
PORTVERSION=	2.08
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to write a CHECKSUMS file for a directory as on CPAN

BUILD_DEPENDS=	p5-Data-Compare>=0:${PORTSDIR}/devel/p5-Data-Compare \
		p5-Module-Signature>=0:${PORTSDIR}/security/p5-Module-Signature
RUN_DEPENDS=	p5-Data-Compare>=0:${PORTSDIR}/devel/p5-Data-Compare \
		p5-Module-Signature>=0:${PORTSDIR}/security/p5-Module-Signature
TEST_DEPENDS=	p5-Compress-Bzip2>=0:${PORTSDIR}/archivers/p5-Compress-Bzip2

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
