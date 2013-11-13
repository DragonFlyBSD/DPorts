# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: converters/p5-Unicode-IMAPUtf7/Makefile 332379 2013-11-01 14:20:56Z vanilla $

PORTNAME=	Unicode-IMAPUtf7
PORTVERSION=	2.01
PORTREVISION=	1
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:FABPOT
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl extension to deal with IMAP UTF-7

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Unicode-String>=0:${PORTSDIR}/converters/p5-Unicode-String
RUN_DEPENDS=	p5-Unicode-String>=0:${PORTSDIR}/converters/p5-Unicode-String

USES=		perl5
USE_PERL5=	configure

post-extract:	# breaks non-root build otherwise
	@${FIND} ${WRKSRC} -type d | ${XARGS} ${CHMOD} a+rx

.include <bsd.port.mk>
