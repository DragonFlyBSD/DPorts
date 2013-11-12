# Created by: Erwin Lansing <erwin@FreeBSD.org>
# $FreeBSD: textproc/p5-IDNA-Punycode/Makefile 333056 2013-11-07 03:52:41Z vanilla $

PORTNAME=	IDNA-Punycode
PORTVERSION=	0.03
PORTREVISION=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ROBURBAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to encode Unicode string in Punycode

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${RM} -f ${WRKSRC}/lib/IDNA/.Punycode.pm.swp

.include <bsd.port.mk>
