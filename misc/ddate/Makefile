PORTNAME=	ddate
DISTVERSIONPREFIX=	v
DISTVERSION=	0.2.2-6
DISTVERSIONSUFFIX=	-g899ca66
PORTREVISION=	1
PORTEPOCH=	3
CATEGORIES=	misc

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Command to print the date in Discordian date format
WWW=		https://github.com/bo0ts/ddate/

LICENSE=	GPLv2

USE_GITHUB=	yes
GH_ACCOUNT=	bo0ts

PLIST_FILES=	bin/ddate \
		share/man/man1/ddate.1.gz

OPTIONS_DEFINE=		KILLBOB PRAISEBOB USFORMAT
OPTIONS_DEFAULT=	KILLBOB

KILLBOB_DESC=	Countdown to X-Day
PRAISEBOB_DESC=	SubGenius slogans
USFORMAT_DESC=	US time format

KILLBOB_CFLAGS=		-DKILL_BOB=\"13013\"
PRAISEBOB_CFLAGS=	-DPRAISE_BOB=\"13013\"
USFORMAT_CFLAGS=	-DUS_FORMAT=\"1\"

do-build:
	${CC} ${CFLAGS} ${LDFLAGS} ${WRKSRC}/${PORTNAME}.c -o ${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${STAGEDIR}${PREFIX}/share/man/man1

.include <bsd.port.mk>
