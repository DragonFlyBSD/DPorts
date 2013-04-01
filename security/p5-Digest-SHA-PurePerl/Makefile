# Created by: Gabor Kovesdan <gabor@FreeBSD.org>
# $FreeBSD: security/p5-Digest-SHA-PurePerl/Makefile 313756 2013-03-09 21:22:52Z ashish $

PORTNAME=	Digest-SHA-PurePerl
PORTVERSION=	5.81
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ashish@FreeBSD.org
COMMENT=	Perl extension for SHA-1/224/256/384/512 in pure Perl

PERL_CONFIGURE=	yes

PORTEXAMPLES=	dups
MAN3=	Digest::SHA::PurePerl.3

.include <bsd.port.options.mk>

post-patch:
	@${REINPLACE_CMD} -e '/EXE_FILES/d' ${WRKSRC}/Makefile.PL

.if ${PORT_OPTIONS:MEXAMPLES}
post-install:
	@${MKDIR} ${EXAMPLESDIR}
	@${INSTALL_DATA} ${PORTEXAMPLES:S,^,${WRKSRC}/examples/,} ${EXAMPLESDIR}

.endif

.include <bsd.port.mk>
