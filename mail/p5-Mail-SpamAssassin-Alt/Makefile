# $FreeBSD: ports/mail/p5-Mail-SpamAssassin-Alt/Makefile,v 1.3 2012/11/17 05:59:09 svnexp Exp $

PORTREVISION=	0
PKGNAMESUFFIX=	-Alt

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Provides optional SpamAssassin tuning

CONFLICTS=	p5-Mail-SpamAssassin-[0-9]* ja-p5-Mail-SpamAssassin-[0-9]* p5-Mail-SpamAssassin-devel-[0-9]*
LATEST_LINK=	p5-Mail-SpamAssassin-Alt

OPTIONS_DEFINE=	AWL FREEMAIL
AWL_DESC=	Auto WhiteList support
FREEMAIL_DESC=	Disable FreeMail support

post-patch-script:
	if [ -n "${PORT_OPTIONS:MAWL}" ]; then ${REINPLACE_CMD} -e '/AWL/s/^#loadplugin/loadplugin/' ${WRKSRC}/rules/v310.pre ; fi
	if [ -n "${PORT_OPTIONS:MFREEMAIL}" ]; then ${REINPLACE_CMD} -e '/FreeMail/s/^loadplugin/#loadplugin/' ${WRKSRC}/rules/v330.pre ; fi

MASTERDIR=	${.CURDIR}/../p5-Mail-SpamAssassin

.include "${MASTERDIR}/Makefile"
