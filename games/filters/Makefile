# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: games/filters/Makefile 331845 2013-10-28 12:13:18Z ehaupt $

PORTNAME=	filters
PORTVERSION=	2.49
CATEGORIES=	games perl5
MASTER_SITES=	http://ftp.debian.org/debian/pool/main/f/filters/ \
		CRITICAL
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Collection of filters, including B1FF, and the Swedish Chef

CONFLICTS=	talkfilters-[0-9]* jive-[0-9]* chef-[0-9]* kenny-[0-9]* \
		lolcat-[0-9]*

USES=		shebangfix gmake perl5
USE_GCC=	any
MAKE_JOBS_UNSAFE=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}

PERLFILTERS=	b1ff censor chef eleet fudd jibberish kenny pirate rasterman \
		spammer studly uniencode upside-down fanboy scottish lolcat
CFILTERS=	jethro kraut cockney jive nyc ken ky00te newspeak nethackify \
		scramble

SHEBANG_FILES=	${PERLFILTERS}

post-extract:
	@${MV} ${WRKSRC}/${PORTNAME}.6 ${WRKSRC}/${PORTNAME}.1

do-install:
.for f in ${CFILTERS}
	${INSTALL_PROGRAM} ${WRKSRC}/${f} ${STAGEDIR}${PREFIX}/bin
.endfor
.for f in ${PERLFILTERS}
	${INSTALL_SCRIPT} ${WRKSRC}/${f} ${STAGEDIR}${PREFIX}/bin
.endfor
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>
